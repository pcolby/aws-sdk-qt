// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEMAILTEMPLATESRESPONSE_H
#define QTAWS_LISTEMAILTEMPLATESRESPONSE_H

#include "sesv2response.h"
#include "listemailtemplatesrequest.h"

namespace QtAws {
namespace SESv2 {

class ListEmailTemplatesResponsePrivate;

class QTAWSSESV2_EXPORT ListEmailTemplatesResponse : public SESv2Response {
    Q_OBJECT

public:
    ListEmailTemplatesResponse(const ListEmailTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEmailTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEmailTemplatesResponse)
    Q_DISABLE_COPY(ListEmailTemplatesResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
