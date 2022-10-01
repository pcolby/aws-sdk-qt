// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTACTLISTREQUEST_H
#define QTAWS_DELETECONTACTLISTREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class DeleteContactListRequestPrivate;

class QTAWSSESV2_EXPORT DeleteContactListRequest : public SESv2Request {

public:
    DeleteContactListRequest(const DeleteContactListRequest &other);
    DeleteContactListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContactListRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
