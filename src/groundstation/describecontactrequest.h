// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTACTREQUEST_H
#define QTAWS_DESCRIBECONTACTREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class DescribeContactRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT DescribeContactRequest : public GroundStationRequest {

public:
    DescribeContactRequest(const DescribeContactRequest &other);
    DescribeContactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeContactRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
