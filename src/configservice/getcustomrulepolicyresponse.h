// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCUSTOMRULEPOLICYRESPONSE_H
#define QTAWS_GETCUSTOMRULEPOLICYRESPONSE_H

#include "configserviceresponse.h"
#include "getcustomrulepolicyrequest.h"

namespace QtAws {
namespace ConfigService {

class GetCustomRulePolicyResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT GetCustomRulePolicyResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    GetCustomRulePolicyResponse(const GetCustomRulePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCustomRulePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCustomRulePolicyResponse)
    Q_DISABLE_COPY(GetCustomRulePolicyResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
