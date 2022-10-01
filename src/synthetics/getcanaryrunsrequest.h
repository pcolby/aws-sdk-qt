// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCANARYRUNSREQUEST_H
#define QTAWS_GETCANARYRUNSREQUEST_H

#include "syntheticsrequest.h"

namespace QtAws {
namespace Synthetics {

class GetCanaryRunsRequestPrivate;

class QTAWSSYNTHETICS_EXPORT GetCanaryRunsRequest : public SyntheticsRequest {

public:
    GetCanaryRunsRequest(const GetCanaryRunsRequest &other);
    GetCanaryRunsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCanaryRunsRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
