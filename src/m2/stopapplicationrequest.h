// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAPPLICATIONREQUEST_H
#define QTAWS_STOPAPPLICATIONREQUEST_H

#include "m2request.h"

namespace QtAws {
namespace M2 {

class StopApplicationRequestPrivate;

class QTAWSM2_EXPORT StopApplicationRequest : public M2Request {

public:
    StopApplicationRequest(const StopApplicationRequest &other);
    StopApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopApplicationRequest)

};

} // namespace M2
} // namespace QtAws

#endif
