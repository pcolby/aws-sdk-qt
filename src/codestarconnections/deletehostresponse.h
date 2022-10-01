// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOSTRESPONSE_H
#define QTAWS_DELETEHOSTRESPONSE_H

#include "codestarconnectionsresponse.h"
#include "deletehostrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class DeleteHostResponsePrivate;

class QTAWSCODESTARCONNECTIONS_EXPORT DeleteHostResponse : public CodeStarconnectionsResponse {
    Q_OBJECT

public:
    DeleteHostResponse(const DeleteHostRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteHostRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHostResponse)
    Q_DISABLE_COPY(DeleteHostResponse)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
