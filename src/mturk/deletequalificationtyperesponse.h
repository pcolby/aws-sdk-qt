// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUALIFICATIONTYPERESPONSE_H
#define QTAWS_DELETEQUALIFICATIONTYPERESPONSE_H

#include "mturkresponse.h"
#include "deletequalificationtyperequest.h"

namespace QtAws {
namespace MTurk {

class DeleteQualificationTypeResponsePrivate;

class QTAWSMTURK_EXPORT DeleteQualificationTypeResponse : public MTurkResponse {
    Q_OBJECT

public:
    DeleteQualificationTypeResponse(const DeleteQualificationTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteQualificationTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteQualificationTypeResponse)
    Q_DISABLE_COPY(DeleteQualificationTypeResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
