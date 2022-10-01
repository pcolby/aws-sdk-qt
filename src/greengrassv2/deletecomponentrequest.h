// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMPONENTREQUEST_H
#define QTAWS_DELETECOMPONENTREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class DeleteComponentRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT DeleteComponentRequest : public GreengrassV2Request {

public:
    DeleteComponentRequest(const DeleteComponentRequest &other);
    DeleteComponentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteComponentRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
