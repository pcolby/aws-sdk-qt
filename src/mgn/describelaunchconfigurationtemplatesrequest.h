// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAUNCHCONFIGURATIONTEMPLATESREQUEST_H
#define QTAWS_DESCRIBELAUNCHCONFIGURATIONTEMPLATESREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class DescribeLaunchConfigurationTemplatesRequestPrivate;

class QTAWSMGN_EXPORT DescribeLaunchConfigurationTemplatesRequest : public MgnRequest {

public:
    DescribeLaunchConfigurationTemplatesRequest(const DescribeLaunchConfigurationTemplatesRequest &other);
    DescribeLaunchConfigurationTemplatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLaunchConfigurationTemplatesRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
