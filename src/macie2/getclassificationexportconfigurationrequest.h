// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLASSIFICATIONEXPORTCONFIGURATIONREQUEST_H
#define QTAWS_GETCLASSIFICATIONEXPORTCONFIGURATIONREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class GetClassificationExportConfigurationRequestPrivate;

class QTAWSMACIE2_EXPORT GetClassificationExportConfigurationRequest : public Macie2Request {

public:
    GetClassificationExportConfigurationRequest(const GetClassificationExportConfigurationRequest &other);
    GetClassificationExportConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetClassificationExportConfigurationRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
