// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGESREQUEST_H
#define QTAWS_LISTIMAGESREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class ListImagesRequestPrivate;

class QTAWSECR_EXPORT ListImagesRequest : public EcrRequest {

public:
    ListImagesRequest(const ListImagesRequest &other);
    ListImagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImagesRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
