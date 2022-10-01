// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBEXECUTIONSFORJOBREQUEST_H
#define QTAWS_LISTJOBEXECUTIONSFORJOBREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListJobExecutionsForJobRequestPrivate;

class QTAWSIOT_EXPORT ListJobExecutionsForJobRequest : public IoTRequest {

public:
    ListJobExecutionsForJobRequest(const ListJobExecutionsForJobRequest &other);
    ListJobExecutionsForJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJobExecutionsForJobRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
