// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDCOMMUNICATIONTOCASEREQUEST_H
#define QTAWS_ADDCOMMUNICATIONTOCASEREQUEST_H

#include "supportrequest.h"

namespace QtAws {
namespace Support {

class AddCommunicationToCaseRequestPrivate;

class QTAWSSUPPORT_EXPORT AddCommunicationToCaseRequest : public SupportRequest {

public:
    AddCommunicationToCaseRequest(const AddCommunicationToCaseRequest &other);
    AddCommunicationToCaseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddCommunicationToCaseRequest)

};

} // namespace Support
} // namespace QtAws

#endif
