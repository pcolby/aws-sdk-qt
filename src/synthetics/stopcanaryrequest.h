// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPCANARYREQUEST_H
#define QTAWS_STOPCANARYREQUEST_H

#include "syntheticsrequest.h"

namespace QtAws {
namespace Synthetics {

class StopCanaryRequestPrivate;

class QTAWSSYNTHETICS_EXPORT StopCanaryRequest : public SyntheticsRequest {

public:
    StopCanaryRequest(const StopCanaryRequest &other);
    StopCanaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopCanaryRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
