// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPOLICYRESPONSE_H
#define QTAWS_DESCRIBEPOLICYRESPONSE_H

#include "organizationsresponse.h"
#include "describepolicyrequest.h"

namespace QtAws {
namespace Organizations {

class DescribePolicyResponsePrivate;

class QTAWSORGANIZATIONS_EXPORT DescribePolicyResponse : public OrganizationsResponse {
    Q_OBJECT

public:
    DescribePolicyResponse(const DescribePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePolicyResponse)
    Q_DISABLE_COPY(DescribePolicyResponse)

};

} // namespace Organizations
} // namespace QtAws

#endif
