// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTVOLUMEREQUEST_H
#define QTAWS_IMPORTVOLUMEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ImportVolumeRequestPrivate;

class QTAWSEC2_EXPORT ImportVolumeRequest : public Ec2Request {

public:
    ImportVolumeRequest(const ImportVolumeRequest &other);
    ImportVolumeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportVolumeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
