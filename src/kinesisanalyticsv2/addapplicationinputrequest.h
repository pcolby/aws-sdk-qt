// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONINPUTREQUEST_H
#define QTAWS_ADDAPPLICATIONINPUTREQUEST_H

#include "kinesisanalyticsv2request.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class AddApplicationInputRequestPrivate;

class QTAWSKINESISANALYTICSV2_EXPORT AddApplicationInputRequest : public KinesisAnalyticsV2Request {

public:
    AddApplicationInputRequest(const AddApplicationInputRequest &other);
    AddApplicationInputRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddApplicationInputRequest)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
