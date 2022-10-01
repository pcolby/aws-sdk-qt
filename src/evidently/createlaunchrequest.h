// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHREQUEST_H
#define QTAWS_CREATELAUNCHREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class CreateLaunchRequestPrivate;

class QTAWSEVIDENTLY_EXPORT CreateLaunchRequest : public EvidentlyRequest {

public:
    CreateLaunchRequest(const CreateLaunchRequest &other);
    CreateLaunchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLaunchRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
