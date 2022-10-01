// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONOUTPUTREQUEST_H
#define QTAWS_ADDAPPLICATIONOUTPUTREQUEST_H

#include "kinesisanalyticsrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class AddApplicationOutputRequestPrivate;

class QTAWSKINESISANALYTICS_EXPORT AddApplicationOutputRequest : public KinesisAnalyticsRequest {

public:
    AddApplicationOutputRequest(const AddApplicationOutputRequest &other);
    AddApplicationOutputRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddApplicationOutputRequest)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
