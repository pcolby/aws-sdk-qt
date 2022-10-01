// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTREQUEST_H
#define QTAWS_DELETECONTACTREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteContactRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DeleteContactRequest : public AlexaForBusinessRequest {

public:
    DeleteContactRequest(const DeleteContactRequest &other);
    DeleteContactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContactRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
