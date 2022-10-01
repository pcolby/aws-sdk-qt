// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTTRACKERREQUEST_H
#define QTAWS_DELETEEVENTTRACKERREQUEST_H

#include "personalizerequest.h"

namespace QtAws {
namespace Personalize {

class DeleteEventTrackerRequestPrivate;

class QTAWSPERSONALIZE_EXPORT DeleteEventTrackerRequest : public PersonalizeRequest {

public:
    DeleteEventTrackerRequest(const DeleteEventTrackerRequest &other);
    DeleteEventTrackerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventTrackerRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
