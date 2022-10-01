// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCANARYREQUEST_H
#define QTAWS_GETCANARYREQUEST_H

#include "syntheticsrequest.h"

namespace QtAws {
namespace Synthetics {

class GetCanaryRequestPrivate;

class QTAWSSYNTHETICS_EXPORT GetCanaryRequest : public SyntheticsRequest {

public:
    GetCanaryRequest(const GetCanaryRequest &other);
    GetCanaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCanaryRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
