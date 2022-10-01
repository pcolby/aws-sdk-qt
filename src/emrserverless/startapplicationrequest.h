// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAPPLICATIONREQUEST_H
#define QTAWS_STARTAPPLICATIONREQUEST_H

#include "emrserverlessrequest.h"

namespace QtAws {
namespace EmrServerless {

class StartApplicationRequestPrivate;

class QTAWSEMRSERVERLESS_EXPORT StartApplicationRequest : public EmrServerlessRequest {

public:
    StartApplicationRequest(const StartApplicationRequest &other);
    StartApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartApplicationRequest)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
