// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGRAPHREQUEST_H
#define QTAWS_DELETEGRAPHREQUEST_H

#include "detectiverequest.h"

namespace QtAws {
namespace Detective {

class DeleteGraphRequestPrivate;

class QTAWSDETECTIVE_EXPORT DeleteGraphRequest : public DetectiveRequest {

public:
    DeleteGraphRequest(const DeleteGraphRequest &other);
    DeleteGraphRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGraphRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
