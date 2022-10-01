// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMDATAIDENTIFIERRESPONSE_H
#define QTAWS_CREATECUSTOMDATAIDENTIFIERRESPONSE_H

#include "macie2response.h"
#include "createcustomdataidentifierrequest.h"

namespace QtAws {
namespace Macie2 {

class CreateCustomDataIdentifierResponsePrivate;

class QTAWSMACIE2_EXPORT CreateCustomDataIdentifierResponse : public Macie2Response {
    Q_OBJECT

public:
    CreateCustomDataIdentifierResponse(const CreateCustomDataIdentifierRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCustomDataIdentifierRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomDataIdentifierResponse)
    Q_DISABLE_COPY(CreateCustomDataIdentifierResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
