// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONINPUTREQUEST_H
#define QTAWS_ADDAPPLICATIONINPUTREQUEST_H

#include "kinesisanalyticsrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class AddApplicationInputRequestPrivate;

class QTAWSKINESISANALYTICS_EXPORT AddApplicationInputRequest : public KinesisAnalyticsRequest {

public:
    AddApplicationInputRequest(const AddApplicationInputRequest &other);
    AddApplicationInputRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddApplicationInputRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
