// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTLENSREQUEST_H
#define QTAWS_EXPORTLENSREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class ExportLensRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT ExportLensRequest : public WellArchitectedRequest {

public:
    ExportLensRequest(const ExportLensRequest &other);
    ExportLensRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportLensRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
