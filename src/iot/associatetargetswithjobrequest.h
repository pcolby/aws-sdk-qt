// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETARGETSWITHJOBREQUEST_H
#define QTAWS_ASSOCIATETARGETSWITHJOBREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class AssociateTargetsWithJobRequestPrivate;

class QTAWSIOT_EXPORT AssociateTargetsWithJobRequest : public IoTRequest {

public:
    AssociateTargetsWithJobRequest(const AssociateTargetsWithJobRequest &other);
    AssociateTargetsWithJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTargetsWithJobRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
