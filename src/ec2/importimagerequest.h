// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTIMAGEREQUEST_H
#define QTAWS_IMPORTIMAGEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ImportImageRequestPrivate;

class QTAWSEC2_EXPORT ImportImageRequest : public Ec2Request {

public:
    ImportImageRequest(const ImportImageRequest &other);
    ImportImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportImageRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
