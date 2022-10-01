// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECANARYREQUEST_H
#define QTAWS_CREATECANARYREQUEST_H

#include "syntheticsrequest.h"

namespace QtAws {
namespace Synthetics {

class CreateCanaryRequestPrivate;

class QTAWSSYNTHETICS_EXPORT CreateCanaryRequest : public SyntheticsRequest {

public:
    CreateCanaryRequest(const CreateCanaryRequest &other);
    CreateCanaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCanaryRequest)

};

} // namespace Synthetics
} // namespace QtAws

#endif
