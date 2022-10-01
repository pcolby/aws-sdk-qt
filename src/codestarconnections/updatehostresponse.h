// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHOSTRESPONSE_H
#define QTAWS_UPDATEHOSTRESPONSE_H

#include "codestarconnectionsresponse.h"
#include "updatehostrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class UpdateHostResponsePrivate;

class QTAWSCODESTARCONNECTIONS_EXPORT UpdateHostResponse : public CodeStarconnectionsResponse {
    Q_OBJECT

public:
    UpdateHostResponse(const UpdateHostRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateHostRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateHostResponse)
    Q_DISABLE_COPY(UpdateHostResponse)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
