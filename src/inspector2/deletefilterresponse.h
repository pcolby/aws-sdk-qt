// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILTERRESPONSE_H
#define QTAWS_DELETEFILTERRESPONSE_H

#include "inspector2response.h"
#include "deletefilterrequest.h"

namespace QtAws {
namespace Inspector2 {

class DeleteFilterResponsePrivate;

class QTAWSINSPECTOR2_EXPORT DeleteFilterResponse : public Inspector2Response {
    Q_OBJECT

public:
    DeleteFilterResponse(const DeleteFilterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFilterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFilterResponse)
    Q_DISABLE_COPY(DeleteFilterResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
