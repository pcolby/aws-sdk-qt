// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILTERRESPONSE_H
#define QTAWS_CREATEFILTERRESPONSE_H

#include "inspector2response.h"
#include "createfilterrequest.h"

namespace QtAws {
namespace Inspector2 {

class CreateFilterResponsePrivate;

class QTAWSINSPECTOR2_EXPORT CreateFilterResponse : public Inspector2Response {
    Q_OBJECT

public:
    CreateFilterResponse(const CreateFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFilterResponse)
    Q_DISABLE_COPY(CreateFilterResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
