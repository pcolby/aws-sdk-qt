// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSECURITYTOKENSERVICEPREFERENCESRESPONSE_H
#define QTAWS_SETSECURITYTOKENSERVICEPREFERENCESRESPONSE_H

#include "iamresponse.h"
#include "setsecuritytokenservicepreferencesrequest.h"

namespace QtAws {
namespace Iam {

class SetSecurityTokenServicePreferencesResponsePrivate;

class QTAWSIAM_EXPORT SetSecurityTokenServicePreferencesResponse : public IamResponse {
    Q_OBJECT

public:
    SetSecurityTokenServicePreferencesResponse(const SetSecurityTokenServicePreferencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetSecurityTokenServicePreferencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetSecurityTokenServicePreferencesResponse)
    Q_DISABLE_COPY(SetSecurityTokenServicePreferencesResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
