// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCLASSIFICATIONEXPORTCONFIGURATIONREQUEST_H
#define QTAWS_PUTCLASSIFICATIONEXPORTCONFIGURATIONREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class PutClassificationExportConfigurationRequestPrivate;

class QTAWSMACIE2_EXPORT PutClassificationExportConfigurationRequest : public Macie2Request {

public:
    PutClassificationExportConfigurationRequest(const PutClassificationExportConfigurationRequest &other);
    PutClassificationExportConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutClassificationExportConfigurationRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
