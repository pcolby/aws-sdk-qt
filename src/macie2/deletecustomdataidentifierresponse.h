// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMDATAIDENTIFIERRESPONSE_H
#define QTAWS_DELETECUSTOMDATAIDENTIFIERRESPONSE_H

#include "macie2response.h"
#include "deletecustomdataidentifierrequest.h"

namespace QtAws {
namespace Macie2 {

class DeleteCustomDataIdentifierResponsePrivate;

class QTAWSMACIE2_EXPORT DeleteCustomDataIdentifierResponse : public Macie2Response {
    Q_OBJECT

public:
    DeleteCustomDataIdentifierResponse(const DeleteCustomDataIdentifierRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCustomDataIdentifierRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomDataIdentifierResponse)
    Q_DISABLE_COPY(DeleteCustomDataIdentifierResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
