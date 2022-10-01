// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLAUNCHREQUEST_H
#define QTAWS_GETLAUNCHREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class GetLaunchRequestPrivate;

class QTAWSEVIDENTLY_EXPORT GetLaunchRequest : public EvidentlyRequest {

public:
    GetLaunchRequest(const GetLaunchRequest &other);
    GetLaunchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLaunchRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
