// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTIMPORTREQUEST_H
#define QTAWS_STARTIMPORTREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class StartImportRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT StartImportRequest : public LexModelsV2Request {

public:
    StartImportRequest(const StartImportRequest &other);
    StartImportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartImportRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
