// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTWORKSPACESRESPONSE_H
#define QTAWS_REBOOTWORKSPACESRESPONSE_H

#include "workspacesresponse.h"
#include "rebootworkspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class RebootWorkspacesResponsePrivate;

class QTAWSWORKSPACES_EXPORT RebootWorkspacesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    RebootWorkspacesResponse(const RebootWorkspacesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RebootWorkspacesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootWorkspacesResponse)
    Q_DISABLE_COPY(RebootWorkspacesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
