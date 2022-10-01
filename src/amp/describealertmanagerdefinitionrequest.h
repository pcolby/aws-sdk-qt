// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALERTMANAGERDEFINITIONREQUEST_H
#define QTAWS_DESCRIBEALERTMANAGERDEFINITIONREQUEST_H

#include "amprequest.h"

namespace QtAws {
namespace Amp {

class DescribeAlertManagerDefinitionRequestPrivate;

class QTAWSAMP_EXPORT DescribeAlertManagerDefinitionRequest : public AmpRequest {

public:
    DescribeAlertManagerDefinitionRequest(const DescribeAlertManagerDefinitionRequest &other);
    DescribeAlertManagerDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAlertManagerDefinitionRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
