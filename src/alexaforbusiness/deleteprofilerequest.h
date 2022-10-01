// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILEREQUEST_H
#define QTAWS_DELETEPROFILEREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteProfileRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DeleteProfileRequest : public AlexaForBusinessRequest {

public:
    DeleteProfileRequest(const DeleteProfileRequest &other);
    DeleteProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProfileRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
