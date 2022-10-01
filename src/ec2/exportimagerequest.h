// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTIMAGEREQUEST_H
#define QTAWS_EXPORTIMAGEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ExportImageRequestPrivate;

class QTAWSEC2_EXPORT ExportImageRequest : public Ec2Request {

public:
    ExportImageRequest(const ExportImageRequest &other);
    ExportImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportImageRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
