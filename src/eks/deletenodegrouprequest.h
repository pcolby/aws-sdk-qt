// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENODEGROUPREQUEST_H
#define QTAWS_DELETENODEGROUPREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class DeleteNodegroupRequestPrivate;

class QTAWSEKS_EXPORT DeleteNodegroupRequest : public EksRequest {

public:
    DeleteNodegroupRequest(const DeleteNodegroupRequest &other);
    DeleteNodegroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNodegroupRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
