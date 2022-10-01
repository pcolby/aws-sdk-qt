// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIOCOMPONENTREQUEST_H
#define QTAWS_DELETESTUDIOCOMPONENTREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class DeleteStudioComponentRequestPrivate;

class QTAWSNIMBLE_EXPORT DeleteStudioComponentRequest : public NimbleRequest {

public:
    DeleteStudioComponentRequest(const DeleteStudioComponentRequest &other);
    DeleteStudioComponentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStudioComponentRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
