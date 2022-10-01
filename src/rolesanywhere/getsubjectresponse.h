// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBJECTRESPONSE_H
#define QTAWS_GETSUBJECTRESPONSE_H

#include "rolesanywhereresponse.h"
#include "getsubjectrequest.h"

namespace QtAws {
namespace RolesAnywhere {

class GetSubjectResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT GetSubjectResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    GetSubjectResponse(const GetSubjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSubjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSubjectResponse)
    Q_DISABLE_COPY(GetSubjectResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
