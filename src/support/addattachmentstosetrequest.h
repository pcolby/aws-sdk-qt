// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDATTACHMENTSTOSETREQUEST_H
#define QTAWS_ADDATTACHMENTSTOSETREQUEST_H

#include "supportrequest.h"

namespace QtAws {
namespace Support {

class AddAttachmentsToSetRequestPrivate;

class QTAWSSUPPORT_EXPORT AddAttachmentsToSetRequest : public SupportRequest {

public:
    AddAttachmentsToSetRequest(const AddAttachmentsToSetRequest &other);
    AddAttachmentsToSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddAttachmentsToSetRequest)

};

} // namespace Support
} // namespace QtAws

#endif
