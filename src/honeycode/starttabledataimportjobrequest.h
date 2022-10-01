// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTABLEDATAIMPORTJOBREQUEST_H
#define QTAWS_STARTTABLEDATAIMPORTJOBREQUEST_H

#include "honeycoderequest.h"

namespace QtAws {
namespace Honeycode {

class StartTableDataImportJobRequestPrivate;

class QTAWSHONEYCODE_EXPORT StartTableDataImportJobRequest : public HoneycodeRequest {

public:
    StartTableDataImportJobRequest(const StartTableDataImportJobRequest &other);
    StartTableDataImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTableDataImportJobRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
