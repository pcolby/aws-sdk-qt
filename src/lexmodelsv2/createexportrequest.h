// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPORTREQUEST_H
#define QTAWS_CREATEEXPORTREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateExportRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT CreateExportRequest : public LexModelsV2Request {

public:
    CreateExportRequest(const CreateExportRequest &other);
    CreateExportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExportRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
