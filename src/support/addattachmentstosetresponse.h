// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDATTACHMENTSTOSETRESPONSE_H
#define QTAWS_ADDATTACHMENTSTOSETRESPONSE_H

#include "supportresponse.h"
#include "addattachmentstosetrequest.h"

namespace QtAws {
namespace Support {

class AddAttachmentsToSetResponsePrivate;

class QTAWSSUPPORT_EXPORT AddAttachmentsToSetResponse : public SupportResponse {
    Q_OBJECT

public:
    AddAttachmentsToSetResponse(const AddAttachmentsToSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddAttachmentsToSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddAttachmentsToSetResponse)
    Q_DISABLE_COPY(AddAttachmentsToSetResponse)

};

} // namespace Support
} // namespace QtAws

#endif
