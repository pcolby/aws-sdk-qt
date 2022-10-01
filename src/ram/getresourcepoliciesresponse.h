// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEPOLICIESRESPONSE_H
#define QTAWS_GETRESOURCEPOLICIESRESPONSE_H

#include "ramresponse.h"
#include "getresourcepoliciesrequest.h"

namespace QtAws {
namespace Ram {

class GetResourcePoliciesResponsePrivate;

class QTAWSRAM_EXPORT GetResourcePoliciesResponse : public RamResponse {
    Q_OBJECT

public:
    GetResourcePoliciesResponse(const GetResourcePoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourcePoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourcePoliciesResponse)
    Q_DISABLE_COPY(GetResourcePoliciesResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
