// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAPPLICATIONREQUEST_H
#define QTAWS_STARTAPPLICATIONREQUEST_H

#include "m2request.h"

namespace QtAws {
namespace M2 {

class StartApplicationRequestPrivate;

class QTAWSM2_EXPORT StartApplicationRequest : public M2Request {

public:
    StartApplicationRequest(const StartApplicationRequest &other);
    StartApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartApplicationRequest)

};

} // namespace M2
} // namespace QtAws

#endif
