// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGESINRECYCLEBINREQUEST_H
#define QTAWS_LISTIMAGESINRECYCLEBINREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ListImagesInRecycleBinRequestPrivate;

class QTAWSEC2_EXPORT ListImagesInRecycleBinRequest : public Ec2Request {

public:
    ListImagesInRecycleBinRequest(const ListImagesInRecycleBinRequest &other);
    ListImagesInRecycleBinRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImagesInRecycleBinRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
