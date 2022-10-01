// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTLENSREQUEST_H
#define QTAWS_IMPORTLENSREQUEST_H

#include "wellarchitectedrequest.h"

namespace QtAws {
namespace WellArchitected {

class ImportLensRequestPrivate;

class QTAWSWELLARCHITECTED_EXPORT ImportLensRequest : public WellArchitectedRequest {

public:
    ImportLensRequest(const ImportLensRequest &other);
    ImportLensRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportLensRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
