// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONREQUEST_H
#define QTAWS_CREATEAPPLICATIONREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class CreateApplicationRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT CreateApplicationRequest : public KinesisAnalyticsV2Request {

public:
    CreateApplicationRequest(const CreateApplicationRequest &other);
    CreateApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApplicationRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
