// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMPORTSREQUEST_H
#define QTAWS_LISTIMPORTSREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class ListImportsRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT ListImportsRequest : public LexModelsV2Request {

public:
    ListImportsRequest(const ListImportsRequest &other);
    ListImportsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImportsRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
